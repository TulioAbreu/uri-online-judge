module Main (main) where

     printLine number = do
          putStrLn $ (show number) ++ " " ++  (show $ number+1) ++ " " ++  (show $ number+2) ++ " " ++ "PUM"

     printLines number 0 = return ()
     printLines number left = do
          printLine number
          printLines (number + 4) (left - 1)
          return ()

     main :: IO()
     main = do
          lines <- readLn
          printLines 1 lines
          return ()