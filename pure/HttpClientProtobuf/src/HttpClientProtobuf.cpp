//
// Created by Oleksandr Fryziuk on 2020-01-15.
//
#include <HttpClientProtobuf.h>

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>

#include <purekit.pb.h>
#include <sstream>
#include <fstream>

#include <google/protobuf/util/json_util.h>
static std::string ProtoToJson(const google::protobuf::Message& proto)
{
    std::string json;
    google::protobuf::util::MessageToJsonString(proto, &json);
    return json;
}



void HttpClientProtobuf::fireGet(build::EnrollmentRequest enrollmentRequest) {

    char *url = "https://api2-dev.virgilsecurity.com/phe/v1/enroll";

    try {
        curlpp::Cleanup cleaner;
        curlpp::Easy request;

        request.setOpt(new curlpp::options::Url(url));
        //request.setOpt(new curlpp::options::Verbose(true));

        std::list<std::string> header;
        header.push_back("Content-Type: application/protobuf");
        header.push_back("AppToken: AT.AsqUpZfrWZkNFDxahHLzugOBtqkJYF3k");
        header.push_back("User-Agent: purekit/java");



        request.setOpt(new curlpp::options::HttpHeader(header));

        std::string enrolmentRequstString = enrollmentRequest.SerializeAsString();

        request.setOpt(new curlpp::options::PostFields(enrolmentRequstString.c_str()));
        request.setOpt(new curlpp::options::PostFieldSize(enrolmentRequstString.size()));

        std::stringstream result;

        request.setOpt(cURLpp::Options::WriteStream(&result));
        request.perform();

        build::EnrollmentResponse enrollmentResponse;

        enrollmentResponse.ParseFromIstream(&result);


        // Request

        std::cout << "Request\n";

        std::cout << ProtoToJson(enrollmentRequest);

        std::cout << "\nResponse\n";

        std::cout << ProtoToJson(enrollmentResponse);


    }
    catch ( curlpp::LogicError & e ) {
        std::cout << e.what() << std::endl;
    }
    catch ( curlpp::RuntimeError & e ) {
        std::cout << e.what() << std::endl;
    }

}
