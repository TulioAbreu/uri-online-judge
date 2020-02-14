SELECT DISTINCT MOVIES_MOVIES_ACTORS.ID, MOVIES_MOVIES_ACTORS.NAME
FROM ((MOVIES JOIN MOVIES_ACTORS ON ID_MOVIES=MOVIES.ID) AS MOVIES_MOVIES_ACTORS JOIN ACTORS ON ID_ACTORS=ACTORS.ID) JOIN  GENRES ON GENRES.ID = MOVIES_MOVIES_ACTORS.ID_GENRES 
  WHERE ACTORS.NAME LIKE '% Silva'
        AND
        GENRES.DESCRIPTION = 'Action'
      
;