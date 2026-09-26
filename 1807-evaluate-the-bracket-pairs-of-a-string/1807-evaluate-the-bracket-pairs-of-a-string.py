class Solution:
    def evaluate(self, s, knowledge):
        mp = {}

        for t in knowledge:
            mp[t[0]] = t[1]

        ans = ""
        i = 0

        while i < len(s):
            if s[i] == '(':
                t = ""
                i += 1

                while i < len(s) and s[i] != ')':
                    t += s[i]
                    i += 1

                if t not in mp:
                    ans += '?'
                else:
                    ans += mp[t]

            else:
                ans += s[i]

            i += 1

        return ans