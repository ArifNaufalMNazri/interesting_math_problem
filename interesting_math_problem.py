def main():
  print("A function f for any two positive integers a and b is defined as:")
  print("f(a, b)=")
  print("a if a = b")
  print("f(a - b, b) if a > b")
  print("f(b - a, a) if a < b")
  a = int(input("Enter a: "))
  b = int(input("Enter b: "))

  print(f"The answer is: {f(a,b)}")

def f(a,b):
  x = a
  y = b
  
  while True:

    if x > y:
      x = x - y
    elif y > x:
      xr = x
      x = y - x
      y = xr
    else:
      break
  
  return x


if __name__ =="__main__":
  main()