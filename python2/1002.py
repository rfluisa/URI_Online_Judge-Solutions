#1002	Área do Círculo	Accepted	Python	0.016	29/09/2017 14:00:51
import math

raio = None

def read_numeric():
  try:
    # read for Python 2.x
    return float(raw_input())
  except NameError:
    # read for Python 3.x
    return float(input())


raio = read_numeric()
print(str("A=") + str("{:0.4f}".format(((math.pow(raio, 2)) * 3.14159))))