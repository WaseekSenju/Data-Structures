arr = [29, 3, 66, 21, 25]
ind = True 
counter = 0 
while len(arr) > 0:
    counter+=counter
    value = arr[0]
    if (value % 2 == 0):
        if (ind):
            arr.pop()
        else:
            ind = not ind
    else:
        if (ind):
            ind = not ind
        else:
           arr.pop()

print(len(arr))