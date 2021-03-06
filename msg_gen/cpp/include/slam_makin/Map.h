/* Auto-generated by genmsg_cpp for file /home/kaca/ros/slam_makin/msg/Map.msg */
#ifndef SLAM_MAKIN_MESSAGE_MAP_H
#define SLAM_MAKIN_MESSAGE_MAP_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "slam_makin/Landmark.h"

namespace slam_makin
{
template <class ContainerAllocator>
struct Map_ {
  typedef Map_<ContainerAllocator> Type;

  Map_()
  : header()
  , landmark()
  {
  }

  Map_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , landmark(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector< ::slam_makin::Landmark_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::slam_makin::Landmark_<ContainerAllocator> >::other >  _landmark_type;
  std::vector< ::slam_makin::Landmark_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::slam_makin::Landmark_<ContainerAllocator> >::other >  landmark;


  ROS_DEPRECATED uint32_t get_landmark_size() const { return (uint32_t)landmark.size(); }
  ROS_DEPRECATED void set_landmark_size(uint32_t size) { landmark.resize((size_t)size); }
  ROS_DEPRECATED void get_landmark_vec(std::vector< ::slam_makin::Landmark_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::slam_makin::Landmark_<ContainerAllocator> >::other > & vec) const { vec = this->landmark; }
  ROS_DEPRECATED void set_landmark_vec(const std::vector< ::slam_makin::Landmark_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::slam_makin::Landmark_<ContainerAllocator> >::other > & vec) { this->landmark = vec; }
private:
  static const char* __s_getDataType_() { return "slam_makin/Map"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "f6038d2fe30c9bcb150c3270229e34db"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
Landmark[] landmark\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: slam_makin/Landmark\n\
time last_update\n\
string landmark_id\n\
geometry_msgs/Point position\n\
float64[9] position_covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, landmark);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, landmark);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(landmark);
    return size;
  }

  typedef boost::shared_ptr< ::slam_makin::Map_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slam_makin::Map_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Map
typedef  ::slam_makin::Map_<std::allocator<void> > Map;

typedef boost::shared_ptr< ::slam_makin::Map> MapPtr;
typedef boost::shared_ptr< ::slam_makin::Map const> MapConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::slam_makin::Map_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::slam_makin::Map_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace slam_makin

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::slam_makin::Map_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::slam_makin::Map_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::slam_makin::Map_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f6038d2fe30c9bcb150c3270229e34db";
  }

  static const char* value(const  ::slam_makin::Map_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf6038d2fe30c9bcbULL;
  static const uint64_t static_value2 = 0x150c3270229e34dbULL;
};

template<class ContainerAllocator>
struct DataType< ::slam_makin::Map_<ContainerAllocator> > {
  static const char* value() 
  {
    return "slam_makin/Map";
  }

  static const char* value(const  ::slam_makin::Map_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::slam_makin::Map_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
Landmark[] landmark\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: slam_makin/Landmark\n\
time last_update\n\
string landmark_id\n\
geometry_msgs/Point position\n\
float64[9] position_covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::slam_makin::Map_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::slam_makin::Map_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::slam_makin::Map_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::slam_makin::Map_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.landmark);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Map_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slam_makin::Map_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::slam_makin::Map_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "landmark[]" << std::endl;
    for (size_t i = 0; i < v.landmark.size(); ++i)
    {
      s << indent << "  landmark[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::slam_makin::Landmark_<ContainerAllocator> >::stream(s, indent + "    ", v.landmark[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // SLAM_MAKIN_MESSAGE_MAP_H

