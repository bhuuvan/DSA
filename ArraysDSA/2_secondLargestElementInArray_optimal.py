import sys

a = [1,2,3,4,5,6,7,8,9,20,20]
def getSecondOrderElements(n: int, a: [int]) -> [int]:
    slargest = secondLargest(a, n)
    ssmallest = secondSmallest(a, n)

    return [slargest, ssmallest]


def secondLargest(a, n):
    largest = a[0]
    slargest = -1
    for i in range(0, n):
        if a[i] > largest:
            slargest = largest
            largest = a[i]
        elif a[i] < largest and slargest < a[i]:
            slargest = a[i]

    return slargest


def secondSmallest(a, n):
    smallest = a[0]
    ssmallest = (10 ^ 9) + 1
    for i in range(0, n):
        if a[i] < smallest:
            ssmallest = smallest
            smallest = a[i]
        elif a[i] != smallest and a[i] < ssmallest:
            ssmallest = a[i]

    return ssmallest

if __name__ == "__main__":
    result = getSecondOrderElements(n=len(a),a=a)
    print(result)