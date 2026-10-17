myList = [10, 20, 30, 20, 10, 50, 30, 60]
resultList = []

print(f'myList: {myList}')

for i in myList:
    if i not in resultList:
        resultList.append(i)

print(f'resultList: {resultList}')      
# Git practice