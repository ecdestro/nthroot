import sys

radicand = float(sys.argv[1])
index = float(sys.argv[2])

print('%.5f'%index, " root of ", '%.5f'%radicand, " is ", '%.5f'%(radicand ** (1.0/index)))
