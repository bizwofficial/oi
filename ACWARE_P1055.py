isbn=input()
isb=isbn[:-1]
isbn="".join(isbn.split("-"))

ident=isbn[-1]
isbn=isbn[:-1]
tar=sum([(i+1)*int(isbn[i]) for i in range(len(isbn))]) % 11

if tar==10:
    tar="X"
tar=str(tar)

if tar==ident:
	print("Right")
else:
	print(isb+tar)
