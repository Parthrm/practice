import pandas as pd

def createDataframe(student_data: list[list[int]]) -> pd.DataFrame:
    result = pd.DataFrame(student_data,columns=['student_id','age'])
    return result
a = createDataframe([[101,15],[2,11],[3,11],[101,20]])


def selectData(students: pd.DataFrame) -> pd.DataFrame:
    result = students[students['student_id'] == 101][['student_id','age']]
    print(result)
selectData(a)