module Main (main) where

areaRetangulo :: Float -> Float -> Float
areaRetangulo l c = l * c

calcHalfPieces :: Float -> Float -> Float
calcHalfPieces l c = 2 * (l - 1) + 2 * (c - 1)

main :: IO()
main = do
     larg <- readLn
     comp <- readLn
     
     let lado = sqrt 0.5

     let half_pieces = calcHalfPieces larg comp
     let half_piece_area = 1 * 0.5 / 2
     let total_half_pieces_area = half_pieces * half_piece_area

     let hhalf_pieces = 4
     let hhalf_pieces_area = 1 * 0.5 / 4
     let total_hhalf_pieces_area = hhalf_pieces * hhalf_pieces_area

     print $ round ((areaRetangulo larg comp - (total_half_pieces_area + total_hhalf_pieces_area)) * 2)
     print $ round half_pieces
