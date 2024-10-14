import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> list[int]:
    [r,c]=players.shape
    return [r,c]


