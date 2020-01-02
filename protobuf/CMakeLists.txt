#   Copyright (C) 2015-2020 Virgil Security Inc.
#
#   All rights reserved.
#
#   Redistribution and use in source and binary forms, with or without
#   modification, are permitted provided that the following conditions are
#   met:
#
#       (1) Redistributions of source code must retain the above copyright
#       notice, this list of conditions and the following disclaimer.
#
#       (2) Redistributions in binary form must reproduce the above copyright
#       notice, this list of conditions and the following disclaimer in
#       the documentation and/or other materials provided with the
#       distribution.
#
#       (3) Neither the name of the copyright holder nor the names of its
#       contributors may be used to endorse or promote products derived from
#       this software without specific prior written permission.
#
#   THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
#   IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
#   WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
#   DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
#   INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
#   (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
#   SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
#   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
#   STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
#   IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
#   POSSIBILITY OF SUCH DAMAGE.
#
#   Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>


cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(virgil-purekit-cpp)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(PROTO_SRC PROTO_HEADER
        ${CMAKE_CURRENT_LIST_DIR}/proto/purekit.proto
        ${CMAKE_CURRENT_LIST_DIR}/proto/purekitV3_client.proto
        ${CMAKE_CURRENT_LIST_DIR}/proto/purekitV3_crypto.proto
        ${CMAKE_CURRENT_LIST_DIR}/proto/purekitV3_grant.proto
        ${CMAKE_CURRENT_LIST_DIR}/proto/purekitV3_storage.proto
        )

add_library(protobuf_models)

target_sources(protobuf_models
        PRIVATE
            ${PROTO_SRC}
            ${PROTO_HEADER}
        )

target_link_libraries(protobuf_models
        PUBLIC
            ${Protobuf_LIBRARIES}
        )

target_include_directories(protobuf_models
        PUBLIC
            ${CMAKE_CURRENT_BINARY_DIR}
            ${Protobuf_INCLUDE_DIRS}
        )

