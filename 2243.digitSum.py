class Solution(object):
    def digitSum(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        while len(s) > k:
          newString = ""
          for i in range(0, len(s), k):
            sum = 0
            for char in s[i:i+k]:
              sum += int(char)
            newString += str(sum)
          s = newString
        return s
