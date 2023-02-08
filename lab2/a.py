s = int(input())
a = str(s)

def is_polindrom(a):
     if a == a[::-1]:
          print("true")
     else:
          print("false")
                    

is_polindrom(a)