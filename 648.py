class Solution:
    def replaceWords(self, dictionary: list[str], sentence: str) -> str:
        words = sentence.split(" ")
        ans=[]
        for w in words:
            roots = [x for x in dictionary if x in w and w.index(x)==0]
            try:
                ans.append(min(roots,key=lambda k:[len(k),w.index(k)]))
            except:
                ans.append(w)
        return " ".join(ans)

print(Solution().replaceWords(["cat","bat","rat"],"the cattle was rattled by the battery"))
print(Solution().replaceWords(["a","b","c"],"aadsfasf absbs bbab cadsfafs"))
print(Solution().replaceWords(["a", "aa", "aaa", "aaaa"],"a aa a aaaa aaa aaa aaa aaaaaa bbb baba ababa"))

# print(min("the cattle was rattled by the battery".split(" "),key=lambda word:len(word)))

"""
The University of Florence
✅Eligibility criteria:
All international students are eligible to apply.
At least 12 years of education for undergraduate courses.
Undergraduate degree for a Master’s course.
Master’s degree to be eligible for PhD courses.

✅Field of Study for Undergraduate:
School of Humanities and Education.
Languages, Literatures and Intercultural Studies.
Science of Education and Training.

✅Field of Study for Masters:
School of Architecture.
School of Economics and Management.
School of Engineering.
School of Psychology.
School of Mathematical, Physical and Natural Sciences.
School of Political Sciences.
School of Humanities and Education.

✅For PhD there are many courses to choose.
Official clickable link to apply is shared in broadcast channel or Comment LINK to get link directly in your inbox.
https://apply.unifi.it
"""