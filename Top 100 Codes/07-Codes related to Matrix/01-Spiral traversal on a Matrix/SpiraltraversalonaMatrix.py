class SpiralMatrix:
    def spiralOrder(self, matrix):
        result = []

        if not matrix:
            return result

        top = 0
        bottom = len(matrix) - 1
        left = 0
        right = len(matrix[0]) - 1

        while top <= bottom and left <= right:
            # Traverse top row
            for i in range(left, right + 1):
                result.append(matrix[top][i])
            top += 1

            # Traverse right column
            for i in range(top, bottom + 1):
                result.append(matrix[i][right])
            right -= 1

            # Traverse bottom row
            if top <= bottom:
                for i in range(right, left - 1, -1):
                    result.append(matrix[bottom][i])
                bottom -= 1

            # Traverse left column
            if left <= right:
                for i in range(bottom, top - 1, -1):
                    result.append(matrix[i][left])
                left += 1

        return result

# Main function
if __name__ == "__main__":
    matrix = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]

    obj = SpiralMatrix()
    result = obj.spiralOrder(matrix)

    print("Spiral Order:", result)
