module Main (main) where

programInterval :: Int -> Int -> IO ()
programInterval menor maior = do
     print $ sum $ filter (\x -> x `rem` 13 /= 0) [menor .. maior]
     return ()

main :: IO()
main = do
     a <- readLn
     b <- readLn

     if a > b
     then programInterval (b+0) (a+0)
     else programInterval (a+0) (b+0)
     return ()