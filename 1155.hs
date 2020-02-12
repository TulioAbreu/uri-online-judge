module Main (main) where
     
import Text.Printf

main = do
     printf "%.2f\n" ((sum $ map (\x-> 1.0 / x) [1.0 .. 100.0]) :: Float)
