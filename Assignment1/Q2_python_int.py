import timeit
import random as rand

# to make the code simpler(choosing 1,2,3,4,5)
dictionary = { 1:32, 2:64, 3:128, 4:256, 5:512 }
print ("Choose an option:\n 1:32,2:64,3:128,4:256,5:512\n")
choice = int (input()) 

# defining a dictionary
n = dictionary[choice] 

# taking the input of the 2 matrixes
A = [[rand.randint(0,50) for i in range(n)] for j in range(n)]
B = [[rand.randint(0,50) for t in range(n)] for l in range(n)]

# resultant matrix (empty)
res = [[0 for m in range(n)] for p in range(n)]

# start time 
start = timeit.default_timer()

# calculating the resultant matrix
for i in range(n):
    for j in range(n):
        for k in range(n):
            res[i][j] = res[i][j] + A[i][k]*B[k][j]

# end time 
stop = timeit.default_timer()

# execution time is the difference end and start time
print("Time of the program: ", stop-start)
