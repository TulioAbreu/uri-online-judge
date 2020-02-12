module Main (main) where 

fibonacciSequence :: Int -> Int
fibonacciSequence 1 = 0
fibonacciSequence 2 = 1
fibonacciSequence n = fibonacciSequence (n - 1) + fibonacciSequence (n - 2)

main :: IO()
main = do
     x <- readLn
     putStr $ show $ fibonacciSequence 1
     mapM_ (\x -> putStr $ " " ++ show x) $ map (\x -> fibonacciSequence x) [2 .. x]
     putStrLn ""