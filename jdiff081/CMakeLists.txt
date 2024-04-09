include_directories(
    ./inc
)

aux_source_directory(./src/ JDIFF_SRC)

add_library (jdiff
    ${JDIFF_SRC}

)

target_include_directories(jdiff PUBLIC 
    ./inc
)

