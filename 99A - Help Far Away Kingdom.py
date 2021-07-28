"""n = input()
if '.' in n:
	num = n.split(".")
	the_num = int(num[0])
	dec_part = int(num[1])
	p = (len(num[1]))
	the_dec_part = int(num[1])/pow(10, p)
	if(the_num%10 == 9):
		print('GOTO Vasilisa.')
	elif(the_num%10 != 9 and the_dec_part<0.5):\
		print(the_num)
	elif(the_num%10 != 9 and the_dec_part>=0.5):
		print(the_num+1)

else:
	print(n)
"""
[print("GOTO Vasilisa." if i[-1]=="9"  else i[:-1]+str(int(i[-1])+1) if int(j[0])>4 else i) for i,j in [input().split(".")]]
