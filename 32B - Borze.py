borze = input();
length_of_borze = len(borze);
i=0;
while i<length_of_borze:
    if borze[i]=='.':
        print(0, end = '');
        #i+=1;
    elif borze[i]=='-' and borze[i+1]=='.':
        print(1, end = '');
        i += 1;
    elif borze[i]=='-' and borze[i+1]=='-':
        print(2, end = '');
        i += 1;
    i+=1;