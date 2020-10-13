def print_formatted(number):
    pad = len(str("{0:b}".format(number)))
    for i in range(1, number+1):
      o = str(oct(i))[2:]
      h = str(hex(i))[2:]
      h = h.upper()
      b = str(bin(i))[2:]
      d = str(i)
      print("{} {} {} {}".format(str(i).rjust(pad), o.rjust(pad).rjust(pad), h.rjust(pad), b.rjust(pad)))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
