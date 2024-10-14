import pandas as pd

def createDataframe(student_data: list[list[int]]) -> pd.DataFrame:
    result = pd.DataFrame(student_data,columns=['student_id','age'])
    return result

def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    customers.drop_duplicates(subset=['student_id'], inplace=True)
    print(customers)

a = createDataframe([[101,15],[2,11],[3,11],[101,20]])
dropDuplicateEmails(a)