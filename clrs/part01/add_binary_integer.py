'''
Consider the problem of adding two two n-bit binary integers, stored in two n-element
arrays A and B. The sum of the two integers should be stored in binary form in
an (n+1)-element array C. 
'''
def add_binary(a, b):
	n = len(a)
	c = [None]*(n + 1)
	carry = 0
	for i in range(n-1, -1, -1):
		c[i+1] = (a[i] + b[i] + carry)%2
		carry = (a[i] + b[i] + carry)//2
	c[0] = carry
	return c

if __name__ == "__main__":
	a = 10
	b = 14
	a = [int(i) for i in list(bin(a))[2:]]
	b = [int(i) for i in list(bin(b))[2:]]
	c = add_binary(a, b)
	c = ''.join([str(i) for i in c])
	print (c)
	print (int(c, 2))