module Main (main) where

import Text.Printf

main = do
     printf "%.2f\n" ((sum $ map (\x -> fst x / snd x) (zip [1, 3 .. 39] (map (\x -> 2 ^ x) [0 .. 19])))::Float)