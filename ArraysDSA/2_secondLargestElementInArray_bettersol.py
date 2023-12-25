arr = [1, 4, 4, 5, 6, 7, 7]

largest = arr[0]
for i in range(1, len(arr)):
    if arr[i] > largest:
        largest = arr[i]

print(largest)
slargest = -1
for i in range(1, len(arr)):
    if arr[i] > slargest and arr[i] != largest:
        slargest = arr[i]

print('largest: ', largest)
print('second largest: ', slargest)