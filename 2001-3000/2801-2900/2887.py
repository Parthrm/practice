import pandas as pd
def createDataframe(student_data: list[list[int]]) -> pd.DataFrame:
    result = pd.DataFrame(student_data,columns=['student_id','age'])
    return result

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
    return products.fillna(value={"quantity":0})

a = createDataframe([[101,15],[2,11],[3,None],[None,20]])
# print(fillMissingValues(a))
for i in a.items():
    print(i)