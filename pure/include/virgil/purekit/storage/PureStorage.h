

#ifndef VIRGIL_PUREKIT_CPP_PURESTORAGE_H
#define VIRGIL_PUREKIT_CPP_PURESTORAGE_H

#include <virgil/purekit/model/UserRecord.h>
#include <virgil/purekit/model/CellKey.h>
#include <virgil/purekit/model/Role.h>
#include <set>
#include <virgil/purekit/model/RoleAssignment.h>
#include <virgil/purekit/model/GrantKey.h>

class PureStorage {

    virtual void insertUser(const UserRecord& userRecord) = 0;
    virtual void updateUser(const UserRecord& userRecord) = 0;

    virtual void updateUsers(std::vector<UserRecord>& userRecords, int previousRecordVersion) = 0;

    virtual std::vector<UserRecord> selectUsers(int recordVersion) = 0;

    virtual void deleteUser(const std::string& userId, bool cascade) = 0;

    virtual CellKey selectCellKey(const std::string& userId, const std::string dataId) = 0;

    virtual void insertCellKey(const CellKey& cellkey) = 0;
    virtual void updateCellkey(const CellKey& cellKey) = 0;

    virtual void deleteCellkey(std::string userId, std::string dataId) = 0;

    virtual void inserRole(const Role& role) = 0;

    virtual std::vector<Role> selectRoles(const std::set<std::string>& roleNames) = 0;

    virtual void insertRoleAssignment(const std::vector<RoleAssignment>& roleAssignmet) = 0;

    virtual std::vector<RoleAssignment> selectRoleAssignments(const std::string&  userId) = 0;

    virtual void deleteRoleAssignments(const std::string& roleName, std::set<std::string> userIds) = 0;

    virtual void insertGrantKey(const GrantKey& grantKey) = 0;

    virtual GrantKey selectGrantKey(const std::string& userId, const VirgilByteArray& keyId) = 0;

    virtual std::vector<GrantKey> selectGrantKeys(int recordVersion) = 0;

    virtual void updateGrantKeys(const std::vector<GrantKey>& grantKey) = 0;

    virtual void deleteGrantKey(std::string& userId, const VirgilByteArray& keyId) = 0;
};




#endif //VIRGIL_PUREKIT_CPP_PURESTORAGE_H
