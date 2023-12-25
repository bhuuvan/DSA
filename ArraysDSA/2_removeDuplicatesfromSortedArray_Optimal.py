arr = [1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,]
n = len(arr)


def removeDuplicatesfromSortedArray(arr,n):

    i = 0
    for j in range(1,n):
        if arr[j]!=arr[i]:
            arr[i+1]=arr[j]
            i = i+1
    return i+1



print(removeDuplicatesfromSortedArray(arr,n))