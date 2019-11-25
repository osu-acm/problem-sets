class Solution:
    def minWindow(self, s: 'str', t: 'str') -> 'str':
        # Set up table
        table = {}
        for x in t:
            if x not in table:
                table[x] = 1
            else:
                table[x] += 1

        # Set up values
        ans, begin, end, counter, length = "", 0, 0, len(table), len(table)*10000000000

        while end < len(s):
            # Default: decrement counter until there is valid string
            if s[end] in table:
                table[s[end]] -= 1
                if table[s[end]] == 0:
                    counter -= 1
            end += 1
            # If it is a valid substring
            while counter == 0:
                # If valid string and less than length, set answer
                if end - begin < length:
                    length = end - begin
                    ans = s[begin:end]
                # If the character is in the table, then add it to table
                if s[begin] in table:
                    table[s[begin]] += 1
                    # If the table incrementation makes string invalid, increment counter
                    # Then, it will go all the way back up and keep looking for valid string
                    if table[s[begin]] == 1:
                        counter += 1
                # Increment counter
                begin += 1
        return ans

            
