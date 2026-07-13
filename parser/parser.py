import re
def counts (filename):
    total_words =0
    total_characters =0
    with open(filename, "r") as f:
        for line in f:
            total_characters +=len(line.rstrip("\n"))
            words = line.split()
            total_words += len(words)
    print("Words: "+ str(total_words))
    print("Characters: " + str(total_characters))


def longestWord(filename):
    big_list = []
    
    with open(filename, "r") as f:
        for line in f:
            word = line.split()
            for i in range(len(word)):
                word[i]= re.sub(r"[^A-Za-z0-9 ]", "", word[i])
            big_list.append(word)
    length =0
    index1 = None
    index2 =None

    for i in range (len(big_list)):
        for j in range (len(big_list[i])):
            if len(big_list[i][j]) > length:
                   length =len(big_list[i][j])
                   index1 =i
                   index2=j
    longest_list=[]
    for i in range (len(big_list)):
        for j in range (len(big_list[i])):
            if len(big_list[i][j]) == length:
               longest_list.append(big_list[i][j])
    print("The longest word(s) was " + str(", ".join(longest_list))+ " and it was " + str(length) +" characters long.")

def avgWordLength():
    total_words =0
    sum = 0
    with open(filename, "r") as f:
        for line in f:
            words = line.split()
            total_words += len(words)
            for i in range(len(words)):
                sum+=len(words[i])
    
    Average=round(sum/total_words,2)
    print("Average letters per word is: " + str(Average))

def certainWord(count):
    total = 0
    with open(filename, "r") as f:
        for line in f:
            total += line.count(count)
    print(str(total))

def uniqueWords(filename):
    total = set()
    with open(filename, "r") as f:
        for line in f:
            words = line.split()
            for w in words:
                w = re.sub(r"[^A-Za-z0-9]", "", w)
                if w:
                    total.add(w.lower())
    print(str(len(total)))


filename = input ("Which file you like to parse? ")
print()
x='n'
while (x=='n'):
    selection =int(input("What would you like to do with this file?\n1) Count words and characters\n2) Find the longest word in the file\n\
3) Calculate the average length of the words in a file\n4) Count number of a certain character or word\n5) Count the number of unique words\nEnter your selection: "))
    if selection ==1:
        counts(filename)
    elif selection ==2:
        longestWord(filename)
    
    elif selection ==3:
        avgWordLength()
    elif selection ==4:
        count = input("What character do you want to count (lowercase and uppercase counted seperatley): ")
        certainWord(count)

    elif selection ==5:
        uniqueWords(filename)
    x= str(input("Do you want to exit the program? Y/N "))
    x = x.lower()