lst1 = [199,
		200,
		208,
		210,
		200,
		207,
		240,
		269,
		260,
		263]
  
count1 = 0

for j in lst1:
  #print(lst1[lst1.index(j)-1])

  if j > lst1[lst1.index(j)-1]:
    count1+=1
    print(f"{lst1[lst1.index(j)-1]} {j} increased")
    
  elif j<=lst1[lst1.index(j)-1]:
    print(f"{lst1[lst1.index(j)-1]} {j} decreased or no change")
  
  if lst1.index(j) == 0:
    #print('got it')
    continue

print(count1)

with open("input.txt", "r") as f:

  lst = f.readlines()

  count = 0
  index = 0
  item = 0

  for index, item in enumerate(lst):

    if item > lst[index-1]:
      count+=1

    if index == 0:
      continue

  print(count)