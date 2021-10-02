"""
question: https://www.geeksforgeeks.org/print-elements-sorted-order-row-column-wise-sorted-matrix/
"""


def sol_1(mat: list) -> list:
    """
    using sort function
    time complexity: O(r*c*log(r*c))
    space complexity: O(r*c)
    """
    ar, n = [], len(mat)
    for i in mat: ar += i
    ar.sort()

    for i in range(n):
        for j in range(n):
            mat[i][j] = ar[i*n + j]

    return mat



def sol_2(mat: list) -> list:
    """
    using merge sort method
    time complexity: O(r*c)
    space complexity: O(r*c)
    """
    ans, N = [], len(mat)

    for i in range(N):
        c1, c2, l1, l2 = 0, 0, N*i, N
        tmp = []

        while c1 < l1 and c2 < l2:
            if ans[c1] <= mat[i][c2]:
                tmp.append(ans[c1])
                c1 += 1
            else:
                tmp.append(mat[i][c2])
                c2 += 1

        for j in range(c1, l1): tmp.append(ans[j])
        for j in range(c2, l2): tmp.append(mat[i][j])

        ans = tmp[:]

    for i in range(N):
        for j in range(N):
            mat[i][j] = ans[i*N + j]

    return mat



