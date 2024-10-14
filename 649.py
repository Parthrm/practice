class Solution:
    def predictPartyVictory(self, senate: str) -> str:
        banned_indexes=[]
        for i,s in enumerate(senate):
            if i not in banned_indexes:
                if s == 'R':
                    try:
                        t = senate[i:].index('D')+i
                    except:
                        try:
                            t=senate.index('D')
                        except:
                            return "Radiant"
                    banned_indexes.append(t)
                elif s=='D':
                    try:
                        t = senate[i:].index('R')+i
                    except:
                        try:
                            t=senate.index('R')
                        except:
                            return "Dire"
                    banned_indexes.append(t)
        return self.predictPartyVictory("".join([s for i,s in enumerate(senate) if i not in banned_indexes]))



# print(Solution().predictPartyVictory("DRRDRDRDRDDRDRDR"))
# print(Solution().predictPartyVictory("RDD"))
print(Solution().predictPartyVictory("DDRRR"))
