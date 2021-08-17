'''pages = input()
splitedPage = pages.split(',')
pNum = []
for pageNumbers in range(0, len(splitedPage)):
    pNum.append(int(splitedPage[pageNumbers]))
FinalPageList = []
for i in pNum:
    if i not in FinalPageList:
        FinalPageList.append(i)
FinalPageList = sorted(FinalPageList, reverse=False)
count = len(FinalPageList)
checkMap = []
while(count>1):
    if(FinalPageList[count-1]-FinalPageList[count-2] == 1):
        checkMap.append('y')
    else:
        checkMap.append('n')
    count=count-1
print(checkMap)
checkMap2 = checkMap.reverse()
print(checkMap)
print(checkMap.index('n')+1)
'''
s,a=set(map(int,input().split(','))),''
l=[x for x in s]
l.sort()
for i in l:
	if i-1 not in l:a+=','+str(i)
	elif i+1 not in l:a+='-'+str(i)
print(a[1:])