#include <virgil/purekit/client/HttpPureClient.h>
#include <virgil/purekit/exceptions/NotImplementedException.h>

void HttpPureClient::insertUser(const build::UserRecord& userRecord) {
    throw NotImplementedException();
}

void HttpPureClient::updateUser(const std::string& userId, const build::UserRecord& userRecord) {
    throw NotImplementedException();
}

build::UserRecord HttpPureClient::getUser(const std::string& userId) {
    throw NotImplementedException();
}

build::UserRecords HttpPureClient::getUsers(const std::vector<std::string>& userIds) {
    throw NotImplementedException();
}

void HttpPureClient::deleteUser(const std::string& userId, bool cascade) {
    throw NotImplementedException();
}

void HttpPureClient::insertCellKey(const build::CellKey& cellKey) {
    throw NotImplementedException();
}

void HttpPureClient::updateCellKey(const std::string& userId, const std::string& dataId, const build::CellKey& cellKey) {
    throw NotImplementedException();
}

build::CellKey HttpPureClient::getCellKey(const std::string& userId, const std::string& dataId) {
    throw NotImplementedException();
}

void HttpPureClient::deleteCellKey(const std::string& userId, const std::string& dataId) {
    throw NotImplementedException();
}

void HttpPureClient::insertRole(const build::Role& role) {
    throw NotImplementedException();
}

build::Roles HttpPureClient::getRoles(const std::vector<std::string>& roleNames) {
    throw NotImplementedException();
}

void HttpPureClient::insertRoleAssignments(const build::RoleAssignments& roleAssignments) {
    throw NotImplementedException();
}

build::RoleAssignments HttpPureClient::getRoleAssignments(const build::GetRoleAssignments& request) {
    throw NotImplementedException();
}

build::RoleAssignment HttpPureClient::getRoleAssignment(const build::GetRoleAssignment& request) {
    throw NotImplementedException();
}

void HttpPureClient::deleteRoleAssignments(const build::DeleteRoleAssignments& request) {
    throw NotImplementedException();
}

void HttpPureClient::insertGrantKey(const build::GrantKey& grantKey) {
    throw NotImplementedException();
}

build::GrantKey HttpPureClient::getGrantKey(const std::string& userId, const VirgilByteArray& keyId) {
    throw NotImplementedException();
}

void HttpPureClient::deleteGrantKey(const std::string& userId, const VirgilByteArray& keyId) {
    throw NotImplementedException();
}