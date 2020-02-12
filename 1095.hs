module Main (main) where

printLine :: (Int, Int) -> IO()
printLine tuple = putStrLn $ "I=" ++ (show . fst $ tuple) ++ " J=" ++ (show . snd $ tuple)  

main :: IO()
main = do
     let result = zip [1, 4 .. 37] [60, 55 .. 0]

     mapM_ printLine result
     return()