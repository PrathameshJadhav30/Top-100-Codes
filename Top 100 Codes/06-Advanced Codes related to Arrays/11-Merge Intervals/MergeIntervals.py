from typing import List

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        # Sort intervals by start time
        intervals.sort(key=lambda x: x[0])
        merged = []

        for interval in intervals:
            # If no overlap, add the interval
            if not merged or merged[-1][1] < interval[0]:
                merged.append(interval)
            else:
                # Overlapping intervals, merge by updating the end
                merged[-1][1] = max(merged[-1][1], interval[1])

        return merged

# Example usage
if __name__ == "__main__":
    sol = Solution()
    intervals = [[1, 3], [2, 6], [8, 10], [15, 18]]
    result = sol.merge(intervals)
    print("Merged Intervals:", result)
