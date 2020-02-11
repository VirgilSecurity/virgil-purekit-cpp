
#ifndef VIRGIL_PUREKIT_CPP_HTTPPURECLIENT_H
#define VIRGIL_PUREKIT_CPP_HTTPPURECLIENT_H
#include <purekit.pb.h>
#include <purekitV3_storage.pb.h>
#include <vector>
#include <purekitV3_client.pb.h>
#include <virgil/purekit/VirgilCrypto/Common.h>


class HttpPureClient {

    void insertUser(const build::UserRecord& userRecord);

    void updateUser(const std::string& userId, const build::UserRecord& userRecord);

    build::UserRecord getUser(const std::string& userId);

    build::UserRecords getUsers(const std::vector<std::string>& userIds);

    void deleteUser(const std::string& userId, bool cascade);

    void insertCellKey(const build::CellKey& cellKey);

    void updateCellKey(const std::string& userId, const std::string& dataId, const build::CellKey& cellKey);

    build::CellKey getCellKey(const std::string& userId, const std::string& dataId);

    void deleteCellKey(const std::string& userId, const std::string& dataId);

    void insertRole(const build::Role& role);

    build::Roles getRoles(const std::vector<std::string>& roleNames);

    void insertRoleAssignments(const build::RoleAssignments& roleAssignments);

    build::RoleAssignments getRoleAssignments(const build::GetRoleAssignments& request);

    build::RoleAssignment getRoleAssignment(const build::GetRoleAssignment& request);

    void deleteRoleAssignments(const build::DeleteRoleAssignments& request);

    void insertGrantKey(const build::GrantKey& grantKey);

    build::GrantKey getGrantKey(const std::string& userId, const VirgilByteArray& keyId);

    void deleteGrantKey(const std::string& userId, const VirgilByteArray& keyId);

};

#endif //VIRGIL_PUREKIT_CPP_HTTPPURECLIENT_H
