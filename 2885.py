import pandas as pd
def createDataframe(student_data: list[list[int]]) -> pd.DataFrame:
    result = pd.DataFrame(student_data,columns=['student_id','age'])
    return result

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
    return students.rename(columns={"id":"student_id","first" : "first_name","last" : "last_name","age" : "age_in_years",})
    

a = createDataframe([[101,15],[2,11],[3,None],[None,20]])
print(renameColumns(a))