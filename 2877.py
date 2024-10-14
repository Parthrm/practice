import pandas as pd

def createDataframe(student_data: list[list[int]]) -> pd.DataFrame:
    result = pd.DataFrame(student_data,columns=['student_id','age'])
    return result

print(createDataframe([[1,15],[2,11],[3,11],[4,20]]))