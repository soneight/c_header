set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF )

add_library( ${SON8_LIB} INTERFACE )

if ( SON8_C_HEADER_DUMMY_FACE_BUILD )
    set( SON8_C_HEADER_DUMMY_FACE c-dummy_face )
    add_library( ${SON8_C_HEADER_DUMMY_FACE} STATIC )
    target_sources( ${SON8_C_HEADER_DUMMY_FACE} PRIVATE ${SON8_C_HEADER_DUMMY_FACE}.cxx )
    target_link_libraries( ${SON8_C_HEADER_DUMMY_FACE} PRIVATE ${SON8_LIB} )
endif( )

# Apache License 2.0
# NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
# SPDX-License-Identifier: Apache-2.0
# lib: `c_header` C++17 Standard C Entities Namespace
# Ⓒ Copyright (c) 2024-2026 Oleg'Ease'Kharchuk ᦒ
