import pandas as pd
def createDataframe(student_data: list[list[int]]) -> pd.DataFrame:
    result = pd.DataFrame(student_data,columns=['student_id','age'])
    return result

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    return students.dropna(subset="age")

a = createDataframe([[101,15],[2,11],[3,None],[None,20]])
print(dropMissingData(a))