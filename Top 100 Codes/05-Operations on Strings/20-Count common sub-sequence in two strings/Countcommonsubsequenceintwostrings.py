def longest_common_subsequence(str1, str2):
    m, n = len(str1), len(str2)

    # Create a 2D DP table initialized with 0
    dp = [[0] * (n + 1) for _ in range(m + 1)]

    # Fill the DP table
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if str1[i - 1] == str2[j - 1]:
                dp[i][j] = 1 + dp[i - 1][j - 1]  # Characters match
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])  # Take the max

    return dp[m][n]  # LCS length


# Input
str1 = input("Enter first string: ")
str2 = input("Enter second string: ")

# Output
lcs_length = longest_common_subsequence(str1, str2)
print("Length of Longest Common Subsequence:", lcs_length)
