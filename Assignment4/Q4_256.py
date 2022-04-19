import random
import time

N = 256
# A and B are the input matrices
# C is the resultant matrix 

A = []; B = []; C = []
i = 0
while (i < N):
    row1 = []; row2 = []; row3 = []
    for j in range(N):
        x = random.randint(-1000000,1000000)*0.2; row1.append(x)
        y = random.randint(-1000000,1000000)*0.2; row2.append(y)
        row3.append(0);

    A.append(row1); B.append(row2); C.append(row3)
    i = i + 1

start_time = time.time()

for i in range(N):
    for j in range(N):
        for k in range(N):
            C[i][j] = C[i][j] +  (A[j][k]*B[k][i])

end_time = time.time()

print('Execution time for the order i,j,k: ', end_time - start_time)

A = []; B = []; C = []
i = 0
while (i < N):
    row1 = []; row2 = []; row3 = []
    for j in range(N):
        x = random.randint(-1000000,1000000)*0.2; row1.append(x)
        y = random.randint(-1000000,1000000)*0.2; row2.append(y)
        row3.append(0);

    A.append(row1); B.append(row2); C.append(row3)
    i = i + 1

start_time2 = time.time()

for i in range(N):
    for k in range(N):
        for j in range(N):
            C[i][j] = C[i][j] +  (A[j][k]*B[k][i])

end_time2 = time.time()

print('Execution time for the order i,k,j: ', end_time2 - start_time2)

A = []; B = []; C = []
i = 0
while (i < N):
    row1 = []; row2 = []; row3 = []
    for j in range(N):
        x = random.randint(-1000000,1000000)*0.2; row1.append(x)
        y = random.randint(-1000000,1000000)*0.2; row2.append(y)
        row3.append(0);

    A.append(row1); B.append(row2); C.append(row3)
    i = i + 1

start_time3 = time.time()

for j in range(N):
    for i in range(N):
        for k in range(N):
            C[i][j] = C[i][j] +  (A[j][k]*B[k][i])
            

end_time3 = time.time()

print('Execution time for the order j,i,k: ', end_time3 - start_time3)

A = []; B = []; C = []
i = 0
while (i < N):
    row1 = []; row2 = []; row3 = []
    for j in range(N):
        x = random.randint(-1000000,1000000)*0.2; row1.append(x)
        y = random.randint(-1000000,1000000)*0.2; row2.append(y)
        row3.append(0);

    A.append(row1); B.append(row2); C.append(row3)
    i = i + 1

start_time4 = time.time()

for j in range(N):
    for k in range(N):
        for i in range(N):
            C[i][j] = C[i][j] +  (A[j][k]*B[k][i])


end_time4 = time.time()

print('Execution time for the order j,k,i: ', end_time4 - start_time4)

A = []; B = []; C = []
i = 0
while (i < N):
    row1 = []; row2 = []; row3 = []
    for j in range(N):
        x = random.randint(-1000000,1000000)*0.2; row1.append(x)
        y = random.randint(-1000000,1000000)*0.2; row2.append(y)
        row3.append(0);

    A.append(row1); B.append(row2); C.append(row3)
    i = i + 1

start_time5 = time.time()

for k in range(N):
    for i in range(N):
        for j in range(N):
            C[i][j] = C[i][j] +  (A[j][k]*B[k][i])
            

end_time5 = time.time()

print('Execution time for the order k,i,j: ', end_time5 - start_time5)

A = []; B = []; C = []
i = 0
while (i < N):
    row1 = []; row2 = []; row3 = []
    for j in range(N):
        x = random.randint(-1000000,1000000)*0.2; row1.append(x)
        y = random.randint(-1000000,1000000)*0.2; row2.append(y)
        row3.append(0);

    A.append(row1); B.append(row2); C.append(row3)
    i = i + 1

start_time6 = time.time()

for k in range(N):
    for j in range(N):
        for i in range(N):
            C[i][j] = C[i][j] +  (A[j][k]*B[k][i])
            

end_time6 = time.time()

print('Execution time for the order k,j,i: ', end_time6 - start_time6)

