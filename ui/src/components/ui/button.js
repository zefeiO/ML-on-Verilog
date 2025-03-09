import * as React from "react";

const Button = ({ className, ...props }) => {
  return <button className={`px-4 py-2 bg-blue-600 text-white rounded ${className}`} {...props} />;
};

export { Button };
