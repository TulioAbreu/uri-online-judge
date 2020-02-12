line = input()
triangle_sides = [float(v) for v in line.split(' ')]
triangle_sides.sort(reverse=True)
A, B, C = triangle_sides

if A >= B+C:
	print("NAO FORMA TRIANGULO")
else:
	if A**2 == B**2 + C**2:
		print("TRIANGULO RETANGULO")
	elif A**2 > B**2 + C**2:
		print("TRIANGULO OBTUSANGULO")
	elif A**2 < B**2 + C**2:
		print("TRIANGULO ACUTANGULO")
	
	c = 0
	if A == B:
		c += 1
	if B == C:
		c += 1
	
	if c == 1:
		print("TRIANGULO ISOSCELES")
	elif c == 2:
		print("TRIANGULO EQUILATERO")