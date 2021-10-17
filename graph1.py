import matplotlib.pyplot as plt
import sys
s = sys.argv[1] + '.txt'
s1 = sys.argv[1] + '.png'
f = open(s, "r")
arr = []
for x in f:
  arr.append(int(x))

plt.figure(1)                # the first figure          # the first subplot in the first figure
plt.plot(arr)
plt.savefig(s1, dpi=300, bbox_inches='tight')
exit()
